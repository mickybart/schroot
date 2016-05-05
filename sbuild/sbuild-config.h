/* sbuild/sbuild-config.h.  Generated from sbuild-config.h.in by configure.  */
/* Copyright © 2005-2009  Roger Leigh <rleigh@debian.org>
 *
 *
 * schroot is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * schroot is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 *********************************************************************/

#ifndef SBUILD_CONFIG_H
#define SBUILD_CONFIG_H

/* This header contains configuration macros which determine the
   correct library to use.  This depends upon the libraries found at
   configure time. */

/* Set if NLS support is available */
#define SBUILD_FEATURE_NLS 1

/* Set if PAM support is available */
#define SBUILD_FEATURE_PAM 1

/* Set if personality support is present */
#define SBUILD_FEATURE_PERSONALITY 1

/* Set if the block-device chroot type is present */
#define SBUILD_FEATURE_BLOCKDEV 1

/* Set if the btrfs-snapshot chroot type is present */
#define SBUILD_FEATURE_BTRFSSNAP 1

/* Set if the lvm-snapshot chroot type is present */
#define SBUILD_FEATURE_LVMSNAP 1

/* Set if the loopback chroot type is present */
#define SBUILD_FEATURE_LOOPBACK 1

/* Set if the union filesystem type is present */
#define SBUILD_FEATURE_UNION 1

/* Define to 1 if you have the <boost/format.hpp> header file. */
#define HAVE_BOOST_FORMAT_HPP 1

/* Define to 1 if you have the <boost/program_options.hpp> header file. */
#define HAVE_BOOST_PROGRAM_OPTIONS_HPP 1

/* Define to 1 if the <memory> header file includes std::shared_ptr */
/* #undef HAVE_MEMORY_SHARED_PTR */

/* Define to 1 if you have the <boost/shared_ptr.hpp> header file. */
#define HAVE_BOOST_SHARED_PTR_HPP 1

/* Define to 1 if you have the <boost/tuple/tuple.hpp> header file. */
#define HAVE_BOOST_TUPLE_TUPLE_HPP 1

/* Define to 1 if you have the <tr1/memory> header file. */
#define HAVE_TR1_MEMORY 1

/* Define to 1 if you have the <tr1/tuple> header file. */
#define HAVE_TR1_TUPLE 1

/* Define to 1 if you have the <tuple> header file. */
/* #undef HAVE_TUPLE */

/* Define to 1 if you have the <regex> header file and std::regex. */
/* #undef HAVE_REGEX_REGEX */

/* Define to 1 if you have the <boost/regex.hpp> header file and boost::regex. */
#define HAVE_BOOST_REGEX 1

/* Default regular expression used to filter user environment */
#define SBUILD_DEFAULT_ENVIRONMENT_FILTER "^(BASH_ENV|CDPATH|ENV|HOSTALIASES|IFS|KRB5_CONFIG|KRBCONFDIR|KRBTKFILE|KRB_CONF|LD_.*|LOCALDOMAIN|NLSPATH|PATH_LOCALE|RES_OPTIONS|TERMINFO|TERMINFO_DIRS|TERMPATH)$"

#define SBUILD_MESSAGE_CATALOGUE "schroot"

#endif /* SBUILD_H */

/*
 * Local Variables:
 * mode:C++
 * End:
 */
