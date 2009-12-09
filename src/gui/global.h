/* 

                          Firewall Builder

                 Copyright (C) 2003 NetCitadel, LLC

  Author:  Vadim Kurland     vadim@fwbuilder.org

  $Id$

  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef __GLOBAL_DEFS_
#define __GLOBAL_DEFS_

#include "../../VERSION.h"
#include <string>

#include <QEvent>

class  QString;
class  QApplication;
class  FWWindow;
class  FWBSettings;

extern QApplication      *app;
extern FWWindow          *mw;
extern FWBSettings       *st;

extern std::string     appRootDir;
extern std::string     userDataDir;
extern std::string     respath;
extern std::string     localepath;
extern std::string     librespath;
extern std::string     sysfname;
extern std::string     tempfname;
extern std::string     argv0;
extern std::string     ee;
extern int             fwbdebug;
extern int             registered;
extern QString         build_num;
extern QString         user_name;

#define SETTINGS_PATH_PREFIX  "/3.1"

#ifdef NDEBUG
#  undef NDEBUG
#  include <assert.h>
#  define NDEBUG
#else
#  include <assert.h>
#endif

#endif
