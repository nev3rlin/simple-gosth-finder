#include "pch/stdafx.hpp"

namespace finder
{
	auto c_finder::find_file( ) -> std::wstring
	{
        const std::string directory_gosth_file = "C:\\Windows\\System32";
        std::regex file_regex( R"([a-zA-Z]{10})" );

        for ( const auto &entry : fs::directory_iterator( directory_gosth_file ) )
        {
            if ( fs::is_regular_file( entry.status( ) ) )
            {
                std::string file_name = entry.path( ).filename( ).string( );
                if ( std::regex_match( file_name, file_regex ) )
                {
                    std::wcout << L"Gosth file found, Name: " << std::wstring( file_name.begin( ), file_name.end( ) ) << std::endl;
                    return std::wstring( file_name.begin( ), file_name.end( ) );
                }
            }
        }

        return L"";
	}
}