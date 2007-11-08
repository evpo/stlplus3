#ifndef STLPLUS_PRINT_ADDRESS
#define STLPLUS_PRINT_ADDRESS
/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

------------------------------------------------------------------------------*/
#include "format_types.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

namespace stlplus
{

  ////////////////////////////////////////////////////////////////////////////////

  void print_address(std::ostream& device, 
                     const void*,
                     unsigned radix = 16,
                     radix_display_t display = radix_c_style_or_hash,
                     unsigned width = 0)
    throw(std::invalid_argument);

  ////////////////////////////////////////////////////////////////////////////////

} // end namespace stlplus

#endif
