/***************************************************/ /**
 * @file    USB2000PlusSpectrometerFeature.h
 * @date    May 2009
 * @author  Ocean Optics, Inc.
 *
 * LICENSE:
 *
 * SeaBreeze Copyright (C) 2014, Ocean Optics Inc
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *******************************************************/

#ifndef USB2000PLUSSPECTROMETERFEATURE_H
#define USB2000PLUSSPECTROMETERFEATURE_H

#include "vendors/OceanOptics/features/spectrometer/GainAdjustedSpectrometerFeature.h"

namespace seabreeze {

class USB2000PlusSpectrometerFeature: public GainAdjustedSpectrometerFeature {
  public:
	USB2000PlusSpectrometerFeature();
	virtual ~USB2000PlusSpectrometerFeature();

  private:
	static const long INTEGRATION_TIME_MINIMUM;
	static const long INTEGRATION_TIME_MAXIMUM;
	static const long INTEGRATION_TIME_INCREMENT;
	static const long INTEGRATION_TIME_BASE;
};

}// namespace seabreeze

#endif /* USB2000PLUSSPECTROMETERFEATURE_H */
