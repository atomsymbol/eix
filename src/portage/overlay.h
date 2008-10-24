// vim:set noet cinoptions= sw=4 ts=4:
// This file is part of the eix project and distributed under the
// terms of the GNU General Public License v2.
//
// Copyright (c)
//   Wolfgang Frisch <xororand@users.sourceforge.net>
//   Emil Beinroth <emilbeinroth@gmx.net>
//   Martin Väth <vaeth@mathematik.uni-wuerzburg.de>

#ifndef __OVERLAY_H__
#define __OVERLAY_H__

#include <string>

class OverlayIdent {
	public:
		std::string path, label;

		OverlayIdent(const char *Path, const char *Label) :
			path(Path), label(Label)
		{ }

		void readLabel(const char *Path);

		std::string human_readable() const;
};


#endif /* __OVERLAY_H__ */
