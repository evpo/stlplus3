/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

  ------------------------------------------------------------------------------*/
#include "print_string.hpp"

namespace stlplus
{

  ////////////////////////////////////////////////////////////////////////////////
  // strings

  void print_string(std::ostream& device, const std::string& value)
  {
    device << value;
  }

  void print_cstring(std::ostream& device, const char* value)
  {
    device << value;
  }

} // end namespace stlplus