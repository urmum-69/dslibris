#ifndef _parse_h
#define _parse_h

#include <expat.h>

typedef enum {NONE,HTML,HEAD,TITLE,BODY,PRE} context_t;

typedef struct {
	context_t stack[16];
	u8 stacksize;
	Book *book;
	page_t *page;
	FT_Vector pen;
} parsedata_t;

void default_hndl(void *data, const char *s, int len);
void start_hndl(void *data, const char *el, const char **attr);
void title_hndl(void *data, const char *txt, int txtlen);
void char_hndl(void *data, const char *txt, int txtlen);
void end_hndl(void *data, const char *el);
void proc_hndl(void *data, const char *target, const char *pidata);
int unknown_hndl(void *encodingHandlerData,
					const XML_Char *name,
					XML_Encoding *info);

bool iswhitespace(u8 c);

void parse_init(parsedata_t *data);
void parse_printerror(XML_Parser p);
bool parse_pagefeed(parsedata_t *data, page_t *page);

#endif