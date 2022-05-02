#ifndef PING_H
#define PING_H

// Our includes
#include "../Command.hpp"

class Ping : public Command
{
  public:
	Ping()
	{
		_min_params = 0;
		_max_params = 1;
		_name = "ping";
		_description = "Just ping-pong the server";
		_usage = "ping";
		_example[0] = "ping";
	}

	void execute()
	{
		_sender->message("pong\n");
	}
};
#endif
