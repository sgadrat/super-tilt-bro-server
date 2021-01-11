Component based: a component is a thread which communicate with other components via thread-safe FIFOs.

One component per game.
One component handling STNP initialization sequence.
One component dispatching incomming udp datagrams to the good thread, according to client state.
One component gathering statistics from others.
Main thread daemonize, starts other fixed threads, and handles signals
