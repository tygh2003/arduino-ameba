/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _WIRING_TONE_
#define _WIRING_TONE_


#include "arduino.h"

class Tone1 
{
    public:
		
		Tone1(){ volume = 50; };
		void set_volume(uint8_t v) { volume = v; }
		void tone(unsigned int frequency, unsigned long duration);
		void noTone(unsigned long duration);
		
	protected:
		// 0 ~ 100
        uint8_t volume;
		void calculate_sinewave(uint16_t *pBuffer, unsigned int buf_size);
		void calculate_zero(uint16_t *pBuffer);
};



#endif /* _WIRING_TONE_ */