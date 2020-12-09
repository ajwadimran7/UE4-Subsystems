# ue4_subsystems
Messing around with UE4 subsystems in C++.


The FTickableGameObject folder has the Engine subsystem that Ticks in the Editor and at runtime.

Learning resources:

In case you didn't know, the subsystem classes are instantiated and managed by the Engine itself. See the second link down below to know more about different subsystems and their lifetime.

Subsystems livestream: https://www.youtube.com/watch?v=v5b1FvKBYzc
Working with subsystems (Documentation): https://docs.unrealengine.com/en-US/ProgrammingAndScripting/Subsystems/index.html

Making it tick:
FTickableObjectBase class: https://docs.unrealengine.com/en-US/API/Runtime/Engine/FTickableObjectBase/index.html
