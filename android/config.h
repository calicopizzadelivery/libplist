/*
 * What autotools would have found on Android. bionic has all of these.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#ifndef LIBPLIST_ANDROID_CONFIG_H
#define LIBPLIST_ANDROID_CONFIG_H

#define HAVE_GMTIME_R 1
#define HAVE_LOCALTIME_R 1
#define HAVE_MEMMEM 1
#define HAVE_STRNDUP 1
#define HAVE_STRPTIME 1
#define HAVE_TIMEGM 1
#define HAVE_TM_TM_GMTOFF 1
#define HAVE_TM_TM_ZONE 1

#define PACKAGE_VERSION "2.7.0"

#endif
