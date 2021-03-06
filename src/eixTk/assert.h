// vim:set noet cinoptions= sw=4 ts=4:
// This file is part of the eix project and distributed under the
// terms of the GNU General Public License v2.
//
// Copyright (c)
//   Wolfgang Frisch <xororand@users.sourceforge.net>
//   Emil Beinroth <emilbeinroth@gmx.net>
//   Martin Väth <martin@mvath.de>

#ifndef SRC_EIXTK_ASSERT_H_
#define SRC_EIXTK_ASSERT_H_ 1

#include <config.h>  // IWYU pragma: keep

// check_includes: include "eixTk/assert.h"

#ifndef NDEBUG

#if defined(EIX_STATIC_ASSERT) || defined(EIX_PARANOIC_ASSERT)
#include <cassert>  // IWYU pragma: export

#include "eixTk/diagnostics.h"
#endif

/**
eix_assert_static is used to check that static initializers (for static classes)
are called exactly once
**/

#ifdef EIX_STATIC_ASSERT
#define eix_assert_static(a) \
	WGNU_STATEMENT_EXPRESSION_OFF \
	assert(a) \
	WGNU_STATEMENT_EXPRESSION_ON
#else
#define eix_assert_static(a)
#endif


#ifdef EIX_PARANOIC_ASSERT
#define eix_assert_paranoic(a) \
	WGNU_STATEMENT_EXPRESSION_OFF \
	assert(a) \
	WGNU_STATEMENT_EXPRESSION_ON
#else
#define eix_assert_paranoic(a)
#endif

#else
#define eix_assert_static(a)
#define eix_assert_paranoic(a)
#endif

#endif  // SRC_EIXTK_ASSERT_H_
