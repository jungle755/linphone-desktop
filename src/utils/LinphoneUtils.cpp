/*
 * LinphoneUtils.cpp
 * Copyright (C) 2017-2018  Belledonne Communications, Grenoble, France
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *  Created on: June 2, 2017
 *      Author: Ronan Abhamon
 */

#include <QString>

#include "LinphoneUtils.hpp"

// =============================================================================

linphone::TransportType LinphoneUtils::stringToTransportType (const QString &transport) {
  if (transport == QLatin1String("TCP"))
    return linphone::TransportType::TransportTypeTcp;
  if (transport == QLatin1String("UDP"))
    return linphone::TransportType::TransportTypeUdp;
  if (transport == QLatin1String("TLS"))
    return linphone::TransportType::TransportTypeTls;

  return linphone::TransportType::TransportTypeDtls;
}
