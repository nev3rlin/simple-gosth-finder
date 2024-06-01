#include "pch/stdafx.hpp"

auto __stdcall main( ) -> int
{
   const auto finder_ = std::make_unique<finder::c_finder>( );
   finder_->find_file( );

   std::cin.get( );

	return EXIT_SUCCESS;
}