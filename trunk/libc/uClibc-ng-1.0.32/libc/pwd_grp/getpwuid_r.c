/*
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#define GETXXKEY_R_FUNC		getpwuid_r
#define GETXXKEY_R_PARSER	__parsepwent
#define GETXXKEY_R_ENTTYPE	struct passwd
#define GETXXKEY_R_TEST(ENT)	((ENT)->pw_uid == key)
#define DO_GETXXKEY_R_KEYTYPE	uid_t
#define DO_GETXXKEY_R_PATHNAME  _PATH_PASSWD
#include "pwd_grp.c"
