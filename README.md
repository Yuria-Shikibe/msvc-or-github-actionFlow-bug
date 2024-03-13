# What?

I have met some problems with `std::chrono::duration`, to be exact, with it's `operator+` and `operator-`

When I compile the project in local devices, this doesn't pop an error, but as you can see in the **GitHub Workflow**, it cannot pass the compile process.

I have no idea whether this is a msvc bug or GitHub workflow bug.

**See The `main.cpp` for more detail**