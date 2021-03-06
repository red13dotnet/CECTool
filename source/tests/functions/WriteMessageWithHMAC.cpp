#include "tests/functions/WriteMessageWithHMAC.hpp"

extern "C" {
#include "3ds/services/cecd.h"
}

namespace Tests {

WriteMessageWithHMAC::WriteMessageWithHMAC(const std::string& filepath) : TestBase(filepath) {
}

WriteMessageWithHMAC::~WriteMessageWithHMAC() {
    log.close();
}

void WriteMessageWithHMAC::RunTest() {
    log << "Starting Test" << std::endl;
    log << "Test Finished" << std::endl;
}

} // namespace Tests
