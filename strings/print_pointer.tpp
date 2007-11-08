/*------------------------------------------------------------------------------

  Author:    Andy Rushton
  Copyright: (c) Andy Rushton, 2007
  License:   BSD License, see ../docs/license.html

  ------------------------------------------------------------------------------*/
#include <string>

namespace stlplus
{

  template <typename T, typename S>
  void print_pointer(std::ostream& device,
                     const T* value,
                     S print_fn,
                     const std::string& null_string,
                     const std::string& prefix,
                     const std::string& suffix)
  {
    if (value)
    {
      device << prefix;
      print_fn(device, *value);
      device << suffix;
    }
    else
    {
      device << null_string;
    }
  }

} // end namespace stlplus
