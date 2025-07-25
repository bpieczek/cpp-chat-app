#pragma once

enum class MessageType {
    Broadcast,
    Private,
    NickChange,
    Connect,
    Disconnect,
    UsersList
};

namespace Colors {
const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string MAGENTA = "\033[1;35m";
const std::string CYAN = "\033[1;36m";
const std::string WHITE = "\033[1;37m";
}
