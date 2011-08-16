/*
|  Copyright (C) 2009 Nikias Bassen <nikias@gmx.li>
|  Part of the gtkpod project.
| 
|  The code contained in this file is free software; you can redistribute
|  it and/or modify it under the terms of the GNU Lesser General Public
|  License as published by the Free Software Foundation; either version
|  2.1 of the License, or (at your option) any later version.
|
|  This file is distributed in the hope that it will be useful,
|  but WITHOUT ANY WARRANTY; without even the implied warranty of
|  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|  Lesser General Public License for more details.
|
|  You should have received a copy of the GNU Lesser General Public
|  License along with this code; if not, write to the Free Software
|  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
|  USA
*/
#include <itdb.h>
#include <itdb_private.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <notify.h>

int itdb_iphone_start_sync(Itdb_Device *device, void **prepdata)
{

	/* PATCH BY H2CO3, 15/08/2011 */
	// there's nothing useful these functions do;
	// on the device the 'Sync in progress' screen just consfuses the user.
	// However, this screen can be achieved by the single function call:
	// notify_post ("com.apple.itunes-mobdev.syncWillStart");
	return 0;
	/* END PATCH */
	
}

int itdb_iphone_stop_sync(void *sync_ctx)
{
	
	/* PATCH BY H2CO3, 15/08/2011 */
	// the same as for itdb_iphone_start_sync ()
	// notify_post ("com.apple.itunes-mobdev.syncDidFinish");
	return 0;
	/* END PATCH */
	
}

