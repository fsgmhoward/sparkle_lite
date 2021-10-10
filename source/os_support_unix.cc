#include "os_support.h"


#if defined(unix) || defined(__unix__) || defined(__unix)
#include <locale.h>

bool is_acceptable_os_version(const std::string& osMinRequiredVersion)
{
}

bool is_matched_os_name(const std::string& osName)
{
}

bool execute(const std::string& package, const std::string& args)
{
}

std::string get_iso639_user_lang()
{
	std::string lang;
	lang += setlocale(LC_ALL, NULL);
	return std::move(lang);
}

#endif // unix
