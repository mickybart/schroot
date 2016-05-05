/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Set if boost::iostreams::file_descriptor close_handle is not available */
/* #undef BOOST_IOSTREAMS_CLOSE_HANDLE_OLD */

/* Set if boost::program_options::options_description::options() is not
   available */
/* #undef BOOST_PROGRAM_OPTIONS_DESCRIPTION_OLD */

/* Set if boost::program_options::validation error uses old construction
   semantics */
/* #undef BOOST_PROGRAM_OPTIONS_VALIDATION_ERROR_OLD */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 if you have the <boost/format.hpp> header file. */
#define HAVE_BOOST_FORMAT_HPP 1

/* Define to 1 if you have the <boost/iostreams/device/file_descriptor.hpp>
   header file. */
#define HAVE_BOOST_IOSTREAMS_DEVICE_FILE_DESCRIPTOR_HPP 1

/* Define to 1 if you have the <boost/program_options.hpp> header file. */
#define HAVE_BOOST_PROGRAM_OPTIONS_HPP 1

/* Set if the <boost/regex.hpp> header file includes boost::regex */
#define HAVE_BOOST_REGEX 1

/* Define to 1 if you have the <boost/shared_ptr.hpp> header file. */
#define HAVE_BOOST_SHARED_PTR_HPP 1

/* Define to 1 if you have the <boost/tuple/tuple.hpp> header file. */
#define HAVE_BOOST_TUPLE_TUPLE_HPP 1

/* Define to 1 if you have the <boost/type_traits.hpp> header file. */
#define HAVE_BOOST_TYPE_TRAITS_HPP 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Set if the <memory> header file includes std::shared_ptr */
/* #undef HAVE_MEMORY_SHARED_PTR */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Set if the <regex> header file includes std::regex */
/* #undef HAVE_REGEX_REGEX */

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the <security/pam_appl.h> header file. */
#define HAVE_SECURITY_PAM_APPL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/personality.h> header file. */
#define HAVE_SYS_PERSONALITY_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tr1/memory> header file. */
#define HAVE_TR1_MEMORY 1

/* Define to 1 if you have the <tr1/tuple> header file. */
#define HAVE_TR1_TUPLE 1

/* Define to 1 if you have the <tuple> header file. */
/* #undef HAVE_TUPLE */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "schroot"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "buildd-tools-devel@lists.alioth.debian.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "schroot"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "schroot 1.6.10"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "schroot"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.6.10"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Package release date (integer). */
#define RELEASE_DATE 1399248000

/* Package release date (string). */
#define RELEASE_DATE_S "05 May 2014"

/* Enable debugging */
/* #undef SBUILD_DEBUG */

/* Default regular expression used to filter user environment */
#define SBUILD_DEFAULT_ENVIRONMENT_FILTER "^(BASH_ENV|CDPATH|ENV|HOSTALIASES|IFS|KRB5_CONFIG|KRBCONFDIR|KRBTKFILE|KRB_CONF|LD_.*|LOCALDOMAIN|NLSPATH|PATH_LOCALE|RES_OPTIONS|TERMINFO|TERMINFO_DIRS|TERMPATH)$"

/* Set if the block-device chroot type is present */
#define SBUILD_FEATURE_BLOCKDEV 1

/* Set if the btrfs-snapshot chroot type is present */
#define SBUILD_FEATURE_BTRFSSNAP 1

/* Set if the loopback chroot type is present */
#define SBUILD_FEATURE_LOOPBACK 1

/* Set if the lvm-snapshot chroot type is present */
#define SBUILD_FEATURE_LVMSNAP 1

/* Set if NLS support is present */
#define SBUILD_FEATURE_NLS 1

/* Set if PAM support is available */
#define SBUILD_FEATURE_PAM 1

/* Set if personality support is present */
#define SBUILD_FEATURE_PERSONALITY 1

/* Set if the union filesystem type is present */
#define SBUILD_FEATURE_UNION 1

/* Set if unshare support is present */
#define SBUILD_FEATURE_UNSHARE 1

/* Host GNU architecture triplet */
#define SBUILD_HOST "armv7l-unknown-linux-gnueabihf"

/* Host CPU */
#define SBUILD_HOST_CPU "armv7l"

/* Host OS */
#define SBUILD_HOST_OS "linux-gnueabihf"

/* Host vendor */
#define SBUILD_HOST_VENDOR "unknown"

/* Platform type, used to modify run-time platform-specific behaviour */
#define SBUILD_PLATFORM "linux"

/* Set if uuid support is present */
#define SBUILD_USE_UUID 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.6.10"
