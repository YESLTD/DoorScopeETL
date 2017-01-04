/*
* Copyright 2005-2017 Rochus Keller <mailto:me@rochus-keller.info>
*
* This file is part of the DoorScopeEtl application
* see <http://doorscope.ch/>).
*
* GNU General Public License Usage
* This file may be used under the terms of the GNU General Public
* License (GPL) versions 2.0 or 3.0 as published by the Free Software
* Foundation and appearing in the file LICENSE.GPL included in
* the packaging of this file. Please review the following information
* to ensure GNU General Public Licensing requirements will be met:
* http://www.fsf.org/licensing/licenses/info/GPLv2.html and
* http://www.gnu.org/copyleft/gpl.html.
*/

#include <QtGui/QApplication>
#include "DoorScopeEtl.h"
#include <QPlastiqueStyle>
#include <QtPlugin>

Q_IMPORT_PLUGIN(qgif)
Q_IMPORT_PLUGIN(qjpeg)

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setOrganizationName( "DoorScope" );
	a.setOrganizationDomain( "rochus.keller@doorscope.ch" );
	a.setApplicationName( "ETL" );
	a.setStyle( new QPlastiqueStyle() );
	DoorScopeEtl w;
	w.show();
	a.connect(&a, SIGNAL(lastWindowClosed()), &a, SLOT(quit()));
	return a.exec();
}