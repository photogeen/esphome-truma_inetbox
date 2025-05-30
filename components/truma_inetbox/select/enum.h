#pragma once

#include "esphome/core/log.h"

namespace esphome {
namespace truma_inetbox {

enum class TRUMA_SELECT_TYPE {
  UNKNOWN,

  HEATER_FAN_MODE,
  HEATER_ENERGY_MIX,
  VENT_MODE,
};

enum class TRUMA_SELECT_TYPE_HEATER_FAN_MODE {
  OFF = 0,
  ECO = 1,
  VARIO_HEAT_NIGHT = 1,
  COMBI_HIGH = 2,
  VARIO_HEAT_AUTO = 2,
  BOOST = 3,
};

enum class TRUMA_SELECT_TYPE_VENT_MODE {
  OFF = 0,
  VENT_1 = 1,
  VENT_2 = 2,
  VENT_3 = 3,
  VENT_4 = 4,
  VENT_5 = 5,
  VENT_6 = 6,
  VENT_7 = 7,
  VENT_8 = 8,
  VENT_9 = 9,
  VENT_10 = 10,
  ECO = 11,
  VENT_HIGH = 13,
};

enum class TRUMA_SELECT_TYPE_HEATER_ENERGY_MIX {
  GAS = 0,
  MIX_1 = 1,
  MIX_2 = 2,
  ELECTRIC_1 = 3,
  ELECTRIC_2 = 4,
};

#ifdef ESPHOME_LOG_HAS_CONFIG
static const char *enum_to_c_str(const TRUMA_SELECT_TYPE val) {
  switch (val) {
    case TRUMA_SELECT_TYPE::HEATER_FAN_MODE:
      return "HEATER_FAN_MODE";
      break;
    case TRUMA_SELECT_TYPE::HEATER_ENERGY_MIX:
      return "HEATER_ENERGY_MIX";
      break;
    case TRUMA_SELECT_TYPE::VENT_MODE:
      return "VENT_MODE";
      break;
    default:
      return "";
      break;
  }
}
#endif  // ESPHOME_LOG_HAS_CONFIG

}  // namespace truma_inetbox
}  // namespace esphome
