A function that returns a line read from a file descriptor.
What we call a “line” is a succession of characters that end with ’\n’ (ascii code 0x0a) or with End Of File (EOF).

Implementation using lists. any size of the buffer and infinite(depends on system) number descriptors are handled.
