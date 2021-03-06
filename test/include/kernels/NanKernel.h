#ifndef NANKERNEL_H
#define NANKERNEL_H

#include "Kernel.h"

// Forward Declaration
class NanKernel;

template<>
InputParameters validParams<NanKernel>();

/**
 * Kernel that generates NaN
 */
class NanKernel : public Kernel
{
public:
  NanKernel(const std::string & name, InputParameters parameters);

protected:
  virtual Real computeQpResidual();

  virtual Real computeQpJacobian();

private:
  unsigned int _timestep_to_nan;
};

#endif //NANKERNEL_H
