#ifndef STLPLUS_STRING_ADDRESS
#define STLPLUS_STRING_ADDRESS
/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

  Functions for converting addresses to/from strings

  ------------------------------------------------------------------------------*/
#include "format_types.hpp"
#include <string>
#include <stdexcept>

namespace stlplus
{

  ////////////////////////////////////////////////////////////////////////////////

  std::string address_to_string(const void*,
                                unsigned radix = 16,
                                radix_display_t display = radix_c_style_or_hash,
                                unsigned width = 0)
    throw(std::invalid_argument);

  ////////////////////////////////////////////////////////////////////////////////

  void* string_to_address(const std::string& value,
                          unsigned radix = 0)
    throw(std::invalid_argument);

  ////////////////////////////////////////////////////////////////////////////////

} // end namespace stlplus

#endif