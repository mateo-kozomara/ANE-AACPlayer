/*
 * Copyright 2017 FreshPlanet
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.freshplanet.ane.AirAACPlayer.functions;


import com.adobe.fre.FREContext;
import com.adobe.fre.FREObject;
import com.freshplanet.ane.AirAACPlayer.AirAACPlayerExtensionContext;

public class GetDurationFunction extends BaseFunction {

	@Override
	public FREObject call(FREContext context, FREObject[] args) {
		super.call(context, args);

		if(AirAACPlayerExtensionContext.player == null)
			return getFREObjectFromInt(0);

		return getFREObjectFromInt((int) AirAACPlayerExtensionContext.player.getDuration());
	}


}
