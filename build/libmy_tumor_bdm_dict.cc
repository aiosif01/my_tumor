
// BioDynaMo dictionary.
// This file was generated.
// Do NOT change it. 
// Changes will be lost the next time this file is generated.

#include "core/util/jit.h"
#include <cstdlib>
#include <sstream>
namespace {

void AppendEnvVar(std::stringstream& s, const char* var_name,
                  const char* suffix) {
  auto val = std::getenv(var_name);
  if (val) {
    s << val << suffix << ":";
  }
}

static struct BioDynaMoDictInit {
  BioDynaMoDictInit() {
    std::stringstream idirs; 
    idirs << "/usr/lib/x86_64-linux-gnu/openmpi/include" << ":";
    idirs << "/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi" << ":";
    idirs << "/usr/include" << ":";
    idirs << std::getenv("ROOTSYS") << "/include" << ":";
    idirs << "/home/ale/my_tumor/build/omp" << ":";
    idirs << std::getenv("BDMSYS") << "/include" << ":";
    idirs << std::getenv("BDMSYS") << "/include/optim" << ":";
    idirs << "/home/ale/my_tumor/src" << ":";
    bdm::JitHeaders::Register("behaviors.h");
    bdm::JitHeaders::Register("brownian.h");
    bdm::JitHeaders::Register("my_cell.h");
    bdm::JitHeaders::Register("my_diffusion_grid.h");
    bdm::JitHeaders::Register("my_tumor.h");
    bdm::JitHeaders::Register("substances.h");

    AppendEnvVar(idirs, "ROOT_INCLUDE_PATH", "");
    setenv("ROOT_INCLUDE_PATH", idirs.str().c_str(), true);
  }
} bdm_dict_initializer;

}

  
