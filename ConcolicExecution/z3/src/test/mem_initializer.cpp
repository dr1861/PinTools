// Automatically generated file.
#include"gparams.h"
#include"debug.h"
#include"rational.h"
#include"trace.h"
#include"symbol.h"
#include"prime_generator.h"
void mem_initialize() {
rational::initialize();
initialize_symbols();
gparams::init();
}
void mem_finalize() {
gparams::finalize();
finalize_debug();
rational::finalize();
finalize_trace();
finalize_symbols();
prime_iterator::finalize();
}
