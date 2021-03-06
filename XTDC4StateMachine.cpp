/*----- PROTECTED REGION ID(XTDC4StateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        XTDC4StateMachine.cpp
//
// description : State machine file for the XTDC4 class
//
// project :     xTDC4_DevServer
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <XTDC4.h>

/*----- PROTECTED REGION END -----*/	//	XTDC4::XTDC4StateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  ON       |  
//  RUNNING  |  
//  OFF      |  
//  FAULT    |  
//  STANDBY  |  


namespace XTDC4_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_error_code_allowed()
 *	Description : Execution allowed for error_code attribute
 */
//--------------------------------------------------------
bool XTDC4::is_error_code_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for error_code attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::error_codeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::error_codeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_error_message_allowed()
 *	Description : Execution allowed for error_message attribute
 */
//--------------------------------------------------------
bool XTDC4::is_error_message_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for error_message attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::error_messageStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::error_messageStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_device_type_allowed()
 *	Description : Execution allowed for device_type attribute
 */
//--------------------------------------------------------
bool XTDC4::is_device_type_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for device_type attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::device_typeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::device_typeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_START_RISING_allowed()
 *	Description : Execution allowed for START_RISING attribute
 */
//--------------------------------------------------------
bool XTDC4::is_START_RISING_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for START_RISING attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::START_RISINGStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::START_RISINGStateAllowed_WRITE

	//	Not any excluded states for START_RISING attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::START_RISINGStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::START_RISINGStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_START_DC_OFFSET_allowed()
 *	Description : Execution allowed for START_DC_OFFSET attribute
 */
//--------------------------------------------------------
bool XTDC4::is_START_DC_OFFSET_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for START_DC_OFFSET attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::START_DC_OFFSETStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::START_DC_OFFSETStateAllowed_WRITE

	//	Not any excluded states for START_DC_OFFSET attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::START_DC_OFFSETStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::START_DC_OFFSETStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH0_ENABLED_allowed()
 *	Description : Execution allowed for CH0_ENABLED attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH0_ENABLED_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH0_ENABLED attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_ENABLEDStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_ENABLEDStateAllowed_WRITE

	//	Not any excluded states for CH0_ENABLED attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_ENABLEDStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_ENABLEDStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH0_RISING_allowed()
 *	Description : Execution allowed for CH0_RISING attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH0_RISING_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH0_RISING attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_RISINGStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_RISINGStateAllowed_WRITE

	//	Not any excluded states for CH0_RISING attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_RISINGStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_RISINGStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH0_DC_OFFSET_allowed()
 *	Description : Execution allowed for CH0_DC_OFFSET attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH0_DC_OFFSET_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH0_DC_OFFSET attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_DC_OFFSETStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_DC_OFFSETStateAllowed_WRITE

	//	Not any excluded states for CH0_DC_OFFSET attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_DC_OFFSETStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_DC_OFFSETStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH1_ENABLED_allowed()
 *	Description : Execution allowed for CH1_ENABLED attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH1_ENABLED_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH1_ENABLED attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_ENABLEDStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_ENABLEDStateAllowed_WRITE

	//	Not any excluded states for CH1_ENABLED attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_ENABLEDStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_ENABLEDStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH1_RISING_allowed()
 *	Description : Execution allowed for CH1_RISING attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH1_RISING_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH1_RISING attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_RISINGStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_RISINGStateAllowed_WRITE

	//	Not any excluded states for CH1_RISING attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_RISINGStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_RISINGStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH1_DC_OFFSET_allowed()
 *	Description : Execution allowed for CH1_DC_OFFSET attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH1_DC_OFFSET_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH1_DC_OFFSET attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_DC_OFFSETStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_DC_OFFSETStateAllowed_WRITE

	//	Not any excluded states for CH1_DC_OFFSET attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_DC_OFFSETStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_DC_OFFSETStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH2_ENABLED_allowed()
 *	Description : Execution allowed for CH2_ENABLED attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH2_ENABLED_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH2_ENABLED attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_ENABLEDStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_ENABLEDStateAllowed_WRITE

	//	Not any excluded states for CH2_ENABLED attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_ENABLEDStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_ENABLEDStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH2_RISING_allowed()
 *	Description : Execution allowed for CH2_RISING attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH2_RISING_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH2_RISING attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_RISINGStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_RISINGStateAllowed_WRITE

	//	Not any excluded states for CH2_RISING attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_RISINGStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_RISINGStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH2_DC_OFFSET_allowed()
 *	Description : Execution allowed for CH2_DC_OFFSET attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH2_DC_OFFSET_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH2_DC_OFFSET attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_DC_OFFSETStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_DC_OFFSETStateAllowed_WRITE

	//	Not any excluded states for CH2_DC_OFFSET attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_DC_OFFSETStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_DC_OFFSETStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH3_ENABLED_allowed()
 *	Description : Execution allowed for CH3_ENABLED attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH3_ENABLED_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH3_ENABLED attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_ENABLEDStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_ENABLEDStateAllowed_WRITE

	//	Not any excluded states for CH3_ENABLED attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_ENABLEDStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_ENABLEDStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH3_RISING_allowed()
 *	Description : Execution allowed for CH3_RISING attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH3_RISING_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH3_RISING attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_RISINGStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_RISINGStateAllowed_WRITE

	//	Not any excluded states for CH3_RISING attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_RISINGStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_RISINGStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH3_DC_OFFSET_allowed()
 *	Description : Execution allowed for CH3_DC_OFFSET attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH3_DC_OFFSET_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for CH3_DC_OFFSET attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_DC_OFFSETStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_DC_OFFSETStateAllowed_WRITE

	//	Not any excluded states for CH3_DC_OFFSET attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_DC_OFFSETStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_DC_OFFSETStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_TW_START_allowed()
 *	Description : Execution allowed for TW_START attribute
 */
//--------------------------------------------------------
bool XTDC4::is_TW_START_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for TW_START attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::TW_STARTStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::TW_STARTStateAllowed_WRITE

	//	Not any excluded states for TW_START attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::TW_STARTStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::TW_STARTStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_TW_END_allowed()
 *	Description : Execution allowed for TW_END attribute
 */
//--------------------------------------------------------
bool XTDC4::is_TW_END_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for TW_END attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::TW_ENDStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::TW_ENDStateAllowed_WRITE

	//	Not any excluded states for TW_END attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::TW_ENDStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::TW_ENDStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_config_changed_allowed()
 *	Description : Execution allowed for config_changed attribute
 */
//--------------------------------------------------------
bool XTDC4::is_config_changed_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for config_changed attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::config_changedStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::config_changedStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_start_trigger_generator_allowed()
 *	Description : Execution allowed for start_trigger_generator attribute
 */
//--------------------------------------------------------
bool XTDC4::is_start_trigger_generator_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for start_trigger_generator attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::start_trigger_generatorStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::start_trigger_generatorStateAllowed_WRITE

	//	Not any excluded states for start_trigger_generator attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::start_trigger_generatorStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::start_trigger_generatorStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_last_run_valid_starts_allowed()
 *	Description : Execution allowed for last_run_valid_starts attribute
 */
//--------------------------------------------------------
bool XTDC4::is_last_run_valid_starts_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for last_run_valid_starts attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::last_run_valid_startsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::last_run_valid_startsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_last_run_empty_starts_allowed()
 *	Description : Execution allowed for last_run_empty_starts attribute
 */
//--------------------------------------------------------
bool XTDC4::is_last_run_empty_starts_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for last_run_empty_starts attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::last_run_empty_startsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::last_run_empty_startsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_last_run_hits_allowed()
 *	Description : Execution allowed for last_run_hits attribute
 */
//--------------------------------------------------------
bool XTDC4::is_last_run_hits_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for last_run_hits attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::last_run_hitsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::last_run_hitsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_last_run_start_errors_allowed()
 *	Description : Execution allowed for last_run_start_errors attribute
 */
//--------------------------------------------------------
bool XTDC4::is_last_run_start_errors_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for last_run_start_errors attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::last_run_start_errorsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::last_run_start_errorsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_start_trigger_generator_frequency_allowed()
 *	Description : Execution allowed for start_trigger_generator_frequency attribute
 */
//--------------------------------------------------------
bool XTDC4::is_start_trigger_generator_frequency_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for start_trigger_generator_frequency attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::start_trigger_generator_frequencyStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::start_trigger_generator_frequencyStateAllowed_WRITE

	//	Not any excluded states for start_trigger_generator_frequency attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::start_trigger_generator_frequencyStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::start_trigger_generator_frequencyStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_run_timeout_allowed()
 *	Description : Execution allowed for run_timeout attribute
 */
//--------------------------------------------------------
bool XTDC4::is_run_timeout_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for run_timeout attribute in Write access.
	/*----- PROTECTED REGION ID(XTDC4::run_timeoutStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::run_timeoutStateAllowed_WRITE

	//	Not any excluded states for run_timeout attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::run_timeoutStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::run_timeoutStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_firmware_revision_allowed()
 *	Description : Execution allowed for firmware_revision attribute
 */
//--------------------------------------------------------
bool XTDC4::is_firmware_revision_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for firmware_revision attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::firmware_revisionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::firmware_revisionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_driver_version_allowed()
 *	Description : Execution allowed for driver_version attribute
 */
//--------------------------------------------------------
bool XTDC4::is_driver_version_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for driver_version attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::driver_versionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::driver_versionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_board_serial_allowed()
 *	Description : Execution allowed for board_serial attribute
 */
//--------------------------------------------------------
bool XTDC4::is_board_serial_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for board_serial attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::board_serialStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::board_serialStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_bin_size_allowed()
 *	Description : Execution allowed for bin_size attribute
 */
//--------------------------------------------------------
bool XTDC4::is_bin_size_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for bin_size attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::bin_sizeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::bin_sizeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_trigger_number_allowed()
 *	Description : Execution allowed for trigger_number attribute
 */
//--------------------------------------------------------
bool XTDC4::is_trigger_number_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for trigger_number attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::trigger_numberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::trigger_numberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH0_Timestamps_allowed()
 *	Description : Execution allowed for CH0_Timestamps attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH0_Timestamps_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for CH0_Timestamps attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH0_TimestampsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH0_TimestampsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH1_Timestamps_allowed()
 *	Description : Execution allowed for CH1_Timestamps attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH1_Timestamps_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for CH1_Timestamps attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH1_TimestampsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH1_TimestampsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH2_Timestamps_allowed()
 *	Description : Execution allowed for CH2_Timestamps attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH2_Timestamps_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for CH2_Timestamps attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH2_TimestampsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH2_TimestampsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_CH3_Timestamps_allowed()
 *	Description : Execution allowed for CH3_Timestamps attribute
 */
//--------------------------------------------------------
bool XTDC4::is_CH3_Timestamps_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for CH3_Timestamps attribute in read access.
	/*----- PROTECTED REGION ID(XTDC4::CH3_TimestampsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	XTDC4::CH3_TimestampsStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_Start_allowed()
 *	Description : Execution allowed for Start attribute
 */
//--------------------------------------------------------
bool XTDC4::is_Start_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Start command.
	/*----- PROTECTED REGION ID(XTDC4::StartStateAllowed) ENABLED START -----*/
	if (get_state() == Tango::ON)
		return true;
	else
		return false;
	/*----- PROTECTED REGION END -----*/	//	XTDC4::StartStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_Stop_allowed()
 *	Description : Execution allowed for Stop attribute
 */
//--------------------------------------------------------
bool XTDC4::is_Stop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Stop command.
	/*----- PROTECTED REGION ID(XTDC4::StopStateAllowed) ENABLED START -----*/
	if (get_state() == Tango::RUNNING)
		return true;
	else
		return false;
	/*----- PROTECTED REGION END -----*/	//	XTDC4::StopStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_Off_allowed()
 *	Description : Execution allowed for Off attribute
 */
//--------------------------------------------------------
bool XTDC4::is_Off_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Off command.
	/*----- PROTECTED REGION ID(XTDC4::OffStateAllowed) ENABLED START -----*/
	if (get_state() == Tango::ON)
		return true;
	else
		return false;
	/*----- PROTECTED REGION END -----*/	//	XTDC4::OffStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_apply_config_allowed()
 *	Description : Execution allowed for apply_config attribute
 */
//--------------------------------------------------------
bool XTDC4::is_apply_config_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for apply_config command.
	/*----- PROTECTED REGION ID(XTDC4::apply_configStateAllowed) ENABLED START -----*/
	if (get_state() == Tango::ON)
		return true;
	else
		return false;
	/*----- PROTECTED REGION END -----*/	//	XTDC4::apply_configStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : XTDC4::is_Clear_allowed()
 *	Description : Execution allowed for Clear attribute
 */
//--------------------------------------------------------
bool XTDC4::is_Clear_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Clear command.
	/*----- PROTECTED REGION ID(XTDC4::ClearStateAllowed) ENABLED START -----*/
	if (get_state() == Tango::ON)
		return true;
	else
		return false;
	/*----- PROTECTED REGION END -----*/	//	XTDC4::ClearStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(XTDC4::XTDC4StateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	XTDC4::XTDC4StateAllowed.AdditionalMethods

}	//	End of namespace
