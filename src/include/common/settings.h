#pragma once

#include <cstdint>

namespace terrier::common {
/**
 * Declare all system-level settings here.
 * There should be no hard-coded values in the code.
 *
 * NOTE: it is expected that all values defined here will eventually
 *   be supplied by a settings manager. Values handled by a settings manager
 *   should be removed from this file.
 */

struct Settings {
  /**
   * Port on which the terrier server listens
   */
  static const uint16_t SERVER_PORT = 2888;

  /**
   * Maximum number of connections to the server.
   */
  static const size_t MAX_CONNECTIONS = 250;

  /**
   * Server connection backlog.
   */
  static const int CONNECTION_BACKLOG = 12;
};
}  // namespace terrier::common
