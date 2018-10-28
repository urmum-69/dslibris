Herein lies the source for dslibris, an EPUB reader for the Nintendo DS.

# Prerequisites
CentOS, Fedora, Ubuntu, Arch Linux, OS X, and Windows XP have all been used as build platforms. Needs:

*   devkitPro r42 with devkitARM
*   libnds-1.5.9
*   libfat-nds-1.0.13
*   maxmod-nds-1.0.9
*   expat-2.1.0
*   freetype-2.4.8
*   zlib-1.2.8
*   a media card and a DLDI patcher, but you knew that.

After installing devkitPro/devkitARM, see

> etc/profile

for an example of setting DEVKITPRO and DEVKITARM in your shell. based on where you installed devkitPro.

Source tarballs for the above are in tool/. See the Makefile 'install-tools' rule for where all of the devkitPro bits need to go. See etc/configure-* for configure incantations. 


# Building
> make

dslibris.nds should show up in your current directory.
for a debugging build,

> DEBUG=1 make


# Installation
See INSTALL.

# Screenshots
![UTF-8 Multingual](http://rhaleblian.files.wordpress.com/2007/09/utf8.png)

# Debugging
arm-eabi-gdb, insight-6.8 and desmume-0.9.12-svn5575 have been known to work for debugging. See online forums for means to build an arm-eabi-targeted Insight for your platform.

# More Info
http://sourceforge.net/projects/ndslibris

ray haleblian
default-arm7 0.7.4-2
devkit-env 1.0.1-1
devkitARM r49-2
devkitpro-keyring r1.787e015-2
dstools 1.2.1-1
dswifi 0.4.2-1
general-tools 1.0.2-2
grit 0.8.15-1
libfat-nds 1.1.3-1
libfilesystem 0.9.14-1
libnds 1.7.3-1
maxmod-nds 1.0.11-2
mmutil 1.8.7-1
nds-examples 20180516-2
ndstool 2.1.2-1
