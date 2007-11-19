/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

  ------------------------------------------------------------------------------*/
#include "print_vector.hpp"
#include "string_vector.hpp"

namespace stlplus
{

  ////////////////////////////////////////////////////////////////////////////////
  // special case of vector<bool>

  void print_bool_vector(std::ostream& device, const std::vector<bool>& values)
  {
    device << bool_vector_to_string(values);
  }

  ////////////////////////////////////////////////////////////////////////////////

} // end namespace stlplus