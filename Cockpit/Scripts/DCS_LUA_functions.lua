--**This file is an attempt to document every available function in lua in DCS, but is incomplete at the moment**

local dev = GetSelf() --With this utility function the following can be used: performClickableAction, listen_command, listen_event, and for some special devices like avSimpleElectricSystem and avSimpleWeaponSystem there are a few more available

dev:listen_command()
function SetCommand(command,value) -- function called by DCS when a command is triggered
end

dev:listen_event("GroundPowerOn")
dev:listen_event("GroundPowerOff")
dev:listen_event("GroundAirOff")
dev:listen_event("GroundAirOn")
dev:listen_event("WeaponRearmFirstStep")
dev:listen_event("WeaponRearmComplete")
dev:listen_event("WeaponRearmSingleStepComplete")
dev:listen_event("UnlimitedWeaponStationRestore")
dev:listen_event("WheelChocksOn")
dev:listen_event("WheelChocksOff")
function CockpitEvent(event,val) -- function called by DCS when event happens
end

dev:performClickableAction(command, value, true/false)--This is used to ‘click’ a switch without using your mouse. This is used a lot for when a key is pressed and you want that key to move a switch.

post_initialize() --This function is run once at the beginning of mission start

update() --This function is run multiple times a second, depending on the update rate set. At the beginning of your device script you must define the update rate using make_default_activity()

print_message_to_user(output)--prints on screen in game, very useful for debug

local sensor_data = get_base_data() -- sensor data, full list below
getAngleOfAttack()
getAngleOfSlide()
getBarometricAltitude()
getCanopyPos()
getCanopyState()
getEngineLeftFuelConsumption()
getEngineLeftRPM()
getEngineLeftTemperatureBeforeTurbine()
getEngineRightFuelConsumption()
getEngineRightRPM()
getEngineRightTemperatureBeforeTurbine()
getFlapsPos()
getFlapsRetracted()
getHeading()
getHorizontalAcceleration()
getIndicatedAirSpeed()
getLandingGearHandlePos()
getLateralAcceleration()
getLeftMainLandingGearDown()
getLeftMainLandingGearUp()
getMachNumber()
getMagneticHeading()
getNoseLandingGearDown()
getNoseLandingGearUp()
getPitch()
getRadarAltitude()
getRateOfPitch()
getRateOfRoll()
getRateOfYaw()
getRightMainLandingGearDown()
getRightMainLandingGearUp()
getRoll()
getRudderPosition()
getSpeedBrakePos()
getSelfAirspeed()
getSelfCoordinates()
getSelfVelocity()
getStickPitchPosition()
getStickRollPosition()
getThrottleLeftPosition()
getThrottleRightPosition()
getTotalFuelWeight()
getTrueAirSpeed()
getVerticalAcceleration()
getVerticalVelocity()
getWOW_LeftMainLandingGear()
getWOW_NoseLandingGear()
getWOW_RightMainLandingGear()

set_aircraft_draw_argument_value(arg #, value)
get_aircraft_draw_argument_value(arg)
get_cockpit_draw_argument_value(arg)

dispatch_action(device ID, command, value)--Triggers command with value. Similar to device:performClickableAction() but doesn’t move the switch

get_param_handle(name)--This is used to set a param handle, best described as a global variable. It is useful for setting animations in mainpanel.lua, getting information into indicators, and getting information between an EFM and lua if you have an EFM. You use :set(value) and :get() to set and read it. Usage would look like:
throttle_position = get_param_handle("THROTTLE_POSITION")
throttle_position:set(0.5)
throttle_position:get()
