// Copyright 2018 James E. King III. Use, modification and
// distribution is subject to the Boost Software License, Version
// 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/core/ignore_unused.hpp>
#include <boost/logic/tribool.hpp>

int main(int, char*[])
{
  bool bx = boost::logic::tribool(boost::logic::indeterminate);
  boost::ignore_unused(bx);	// notreached
  return 1;			// notreached
}
