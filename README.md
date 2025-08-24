# Goal:
Make CMake a background thought that can be operated in a simple, easily reproducible way.
Reduce amount of indirection between the CMake frontend (CMake configure/build/test/package steps) and github actions

# Pain Points:
* Interface between CMake steps and github actions
* Layers of indirection (what does this mean, expand upon this idea)
* Single-Config vs. Multi-Config generators
  * More specifically, using configure time logic to decide what to do, which can conflict with multi-config generators which don't really populate
    configure-time variables like CMAKE_BUILD_TYPE
* Reduce the "many ways to do one thing" problem
  * We will do things one way, in every place we can, to improve reproducability
  