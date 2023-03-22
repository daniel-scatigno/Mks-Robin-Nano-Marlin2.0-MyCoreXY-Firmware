/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const temp_entry_t temptable_111[] PROGMEM = {
{	OV	(	16	)	,	300	}	,
{	OV	(	18	)	,	295	}	,
{	OV	(	20	)	,	290	}	,
{	OV	(	20	)	,	285	}	,
{	OV	(	23	)	,	280	}	,
{	OV	(	24	)	,	275	}	,
{	OV	(	26	)	,	270	}	,
{	OV	(	29	)	,	265	}	,
{	OV	(	31	)	,	260	}	,
{	OV	(	33	)	,	255	}	,
{	OV	(	37	)	,	250	}	,
{	OV	(	40	)	,	245	}	,
{	OV	(	44	)	,	240	}	,
{	OV	(	48	)	,	235	}	,
{	OV	(	52	)	,	230	}	,
{	OV	(	56	)	,	225	}	,
{	OV	(	62	)	,	220	}	,
{	OV	(	68	)	,	215	}	,
{	OV	(	75	)	,	210	}	,
{	OV	(	82	)	,	205	}	,
{	OV	(	90	)	,	200	}	,
{	OV	(	99	)	,	195	}	,
{	OV	(	109	)	,	190	}	,
{	OV	(	120	)	,	185	}	,
{	OV	(	132	)	,	180	}	,
{	OV	(	145	)	,	175	}	,
{	OV	(	160	)	,	170	}	,
{	OV	(	176	)	,	165	}	,
{	OV	(	194	)	,	160	}	,
{	OV	(	213	)	,	155	}	,
{	OV	(	235	)	,	150	}	,
{	OV	(	258	)	,	145	}	,
{	OV	(	284	)	,	140	}	,
{	OV	(	311	)	,	135	}	,
{	OV	(	341	)	,	130	}	,
{	OV	(	372	)	,	125	}	,
{	OV	(	405	)	,	120	}	,
{	OV	(	439	)	,	115	}	,
{	OV	(	475	)	,	110	}	,
{	OV	(	512	)	,	105	}	,
{	OV	(	551	)	,	100	}	,
{	OV	(	588	)	,	95	}	,
{	OV	(	627	)	,	90	}	,
{	OV	(	665	)	,	85	}	,
{	OV	(	703	)	,	80	}	,
{	OV	(	738	)	,	75	}	,
{	OV	(	773	)	,	70	}	,
{	OV	(	805	)	,	65	}	,
{	OV	(	836	)	,	60	}	,
{	OV	(	864	)	,	55	}	,
{	OV	(	891	)	,	50	}	,
{	OV	(	914	)	,	45	}	,
{	OV	(	933	)	,	40	}	,
{	OV	(	951	)	,	35	}	,
{	OV	(	965	)	,	30	}	,
{	OV	(	977	)	,	25	}	,
{	OV	(	985	)	,	20	}	,
{	OV	(	993	)	,	15	}	,
{	OV	(	999	)	,	10	}	,
{	OV	(	1004	)	,	5	}	,
{	OV	(	1008	)	,	0	}	



};
