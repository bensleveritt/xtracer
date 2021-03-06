#ifndef XTRACER_LOG_HPP_INCLUDED
#define XTRACER_LOG_HPP_INCLUDED

#include <string>
#include <vector>
#include <stdarg.h>

// Disable: "<type> needs to have dll-interface to be used by clients"
// This warning refers to STL member variables which are private and
// therefore can be safely ignored.
#pragma warning (push)
#pragma warning (disable : 4251)

enum LOGENTRY_TYPE
{
	LOGENTRY_MESSAGE,
	LOGENTRY_WARNING,
	LOGENTRY_ERROR
};

class LogEntry
{
	friend class Log;
	protected:
		LogEntry();
		LOGENTRY_TYPE p_type;
		std::string p_msg;
};

class Log
{
	public:
		static Log &handle();

		// Logging functions.
		void log(LOGENTRY_TYPE type, const char * msg, ...);
		void log_message(const char *msg, ...);
		void log_error(const char *msg, ...);
		void log_warning(const char *msg, ...);
		void rewind(bool clear = false);
		void max_size(unsigned int size);
		void set_append();
		void pop_back();
		void pop_front();

		// Set/Get the echo flag.
		void echo(bool state);
		bool echo() const;

		// Releases all the log entries.
		void clear();

		// Count entries/
		unsigned int count_entries();

		// Dumps all the log entries to the given file.
		// RETURN CODES:
		//	0: No errors.
		//	1: I/O error.
		int dump(const char* fpath);

		std::string get_log_entry(const unsigned int idx) const;

	private:
		Log();
		~Log();

		// Private utility for general purpose logging.
		void pulog(LOGENTRY_TYPE type, const char *msg, va_list args);

		unsigned int m_max_log_size;
		bool m_flag_echo;
		bool m_flag_append;

		std::vector<LogEntry*> m_log;
		static Log m_log_manager;
};

#pragma warning (pop)

#endif /* XTRACER_LOG_HPP_INCLUDED */
