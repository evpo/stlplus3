/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

  use the unsigned long representation for pointers

------------------------------------------------------------------------------*/
#include "print_address.hpp"
#include "print_int.hpp"
////////////////////////////////////////////////////////////////////////////////

namespace stlplus
{

  ////////////////////////////////////////////////////////////////////////////////

  void print_address(std::ostream& device, const void* i, unsigned radix, radix_display_t display, unsigned width)
    throw(std::invalid_argument)
  {
    print_unsigned_long(device, (unsigned long)i, radix, display, width);
  }

  ////////////////////////////////////////////////////////////////////////////////

} // end namespace stlplus