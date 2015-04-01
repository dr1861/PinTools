// Automatically generated file
#ifndef __SLS_PARAMS_HPP_
#define __SLS_PARAMS_HPP_
#include"params.h"
#include"gparams.h"
struct sls_params {
  params_ref const & p;
  params_ref g;
  sls_params(params_ref const & _p = params_ref::get_empty()):
     p(_p), g(gparams::get_module("sls")) {}
  static void collect_param_descrs(param_descrs & d) {
    d.insert("max_memory", CPK_UINT, "maximum amount of memory in megabytes", "4294967295","sls");
    d.insert("restarts", CPK_UINT, "(max) number of restarts", "4294967295","sls");
    d.insert("plateau_limit", CPK_UINT, "pleateau limit", "10","sls");
    d.insert("random_seed", CPK_UINT, "random seed", "0","sls");
  }
  /*
     REG_MODULE_PARAMS('sls', 'sls_params::collect_param_descrs')
     REG_MODULE_DESCRIPTION('sls', 'Experimental Stochastic Local Search Solver (for QFBV only).')
  */
  unsigned max_memory() const { return p.get_uint("max_memory", g, 4294967295u); }
  unsigned restarts() const { return p.get_uint("restarts", g, 4294967295u); }
  unsigned plateau_limit() const { return p.get_uint("plateau_limit", g, 10u); }
  unsigned random_seed() const { return p.get_uint("random_seed", g, 0u); }
};
#endif
