/* config.h.in.  Generated from configure.ac by autoheader.  */
/* Instead of some malicious configure scripts,
   these values were correctly defined by H2CO3
*/

/* The normal alignment of `double', in bytes. */
#undef ALIGNOF_DOUBLE

/* always defined to indicate that i18n is enabled */
#undef ENABLE_NLS

/* Gettext package. */
#undef GETTEXT_PACKAGE
#define GETTEXT_PACKAGE "libgpod"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#undef HAVE_BIND_TEXTDOMAIN_CODESET

/* Define to 1 if you have the `dcgettext' function. */
#undef HAVE_DCGETTEXT

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H
#define HAVE_DLFCN_H 1

/* Whether gdk-pixbuf is installed, ArtworkDB writing support will be disabled
   if it can't be found */
#undef HAVE_GDKPIXBUF

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Define to 1 if you have the `g_checksum_reset' function. */
#undef HAVE_G_CHECKSUM_RESET

/* Define to 1 if you have the `g_int64_equal' function. */
#undef HAVE_G_INT64_EQUAL

/* Define to 1 if you have the `g_int64_hash' function. */
#undef HAVE_G_INT64_HASH

/* Define if you have HAL support */
#undef HAVE_HAL

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define if your <locale.h> file defines LC_MESSAGES. */
#undef HAVE_LC_MESSAGES

/* Define if you have libimobiledevice support */
#undef HAVE_LIBIMOBILEDEVICE

/* Whether libusb is installed */
#undef HAVE_LIBUSB

/* Whether libxml is installed, it's used to parse SysInfoExtended */
#undef HAVE_LIBXML
#define HAVE_LIBXML 1

/* Define to 1 if you have the <locale.h> header file. */
#undef HAVE_LOCALE_H

/* Define to 1 if you have the `localtime_r' function. */
#undef HAVE_LOCALTIME_R

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Whether pygobject is installed, Python API will lack GdkPixbuf support
   without PyGOBJECT */
#undef HAVE_PYGOBJECT

/* Define if you have sgutils support */
#undef HAVE_SGUTILS

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H
#define HAVE_STRING_H 1

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_GMTOFF

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1

/* Whether TagLib is installed, it's only used in a test program */
#undef HAVE_TAGLIB

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1

/* Whether zlib is installed, it's used for compressed iTunesCDB */
#undef HAVE_ZLIB
#define HAVE_ZLIB 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Name of package */
#undef PACKAGE
#define PACKAGE "libgpod"

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME
#define PACKAGE_NAME "libgpod"

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING
#define PACKAGE_STRING "libgpod 0.8.2ondevice1"

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION
#define PACKAGE_VERSION "0.8.2ondevice1"

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS
#define STDC_HEADERS 1

/* Directory where HAL/udev will create a sub-directory to mount iPods */
#undef TMPMOUNTDIR

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#undef VERSION
#define VERSION "0.8.2ondevice1"

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#undef _POSIX_SOURCE

