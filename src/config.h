
#ifndef SH_WG_CONFIG_H_
#define SH_WG_CONFIG_H_

#include <Arduino.h>

// Hardware GPIO pin allocations

constexpr gpio_num_t kCanRxPin = GPIO_NUM_7;
constexpr gpio_num_t kCanTxPin = GPIO_NUM_5;
constexpr gpio_num_t kCanLedEnPin = GPIO_NUM_19;
constexpr gpio_num_t kBlueLedPin = GPIO_NUM_19;
constexpr gpio_num_t kYellowLedPin = GPIO_NUM_19;
constexpr gpio_num_t kRedLedPin = GPIO_NUM_19;
constexpr gpio_num_t kHallInputPin = GPIO_NUM_19;

// PWM channels for the LEDs

constexpr int kRedPWMChannel = 0;
constexpr int kYellowPWMChannel = 1;
constexpr int kBluePWMChannel = 2;

constexpr uint16_t kDefaultNMEA0183TCPServerPort = 2222;
constexpr uint16_t kDefaultYdwgRawTCPServerPort = 2223;

constexpr uint16_t kDefaultNMEA0183UDPServerPort = 2000;
constexpr uint16_t kDefaultYdwgRawUDPServerPort = 2002;

// update the system time every hour
constexpr unsigned long kTimeUpdatePeriodMs = 3600 * 1000;

/**
 * How long to wait before the next check if no firmware update was available.
 */
static constexpr int kDelayBetweenFirmwareUpdateChecksMs =
    60 * 60 * 1000;  // 1 hour

// WiFi captive portal password
constexpr char kWiFiCaptivePortalPassword[] = "abcdabcd";

constexpr size_t kMaxNMEA2000MessageSeasmartSize = 500;
constexpr size_t kMaxNMEA0183MessageSize = 200;

#endif  // SH_WG_CONFIG_H_
