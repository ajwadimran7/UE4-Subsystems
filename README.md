# ue4_subsystems
Messing around with UE4 subsystems in C++.


The FTickableGameObject folder has the Engine subsystem that Ticks in the Editor and at runtime.

The FTickableEditorObject folder has the Engine subsystem that Ticks in the Editor only and you must include the "UnrealEd" module in the public depencency of your Build file.

The Initializing dependency example folder has two Game Instance subsystem in which one AjwadGameInstanceSubsystem is dependent on RogerioGameInstanceSubsystem so it initializes it first. This can greatly help when you need another subsystem to start first before you want do some stuff in the other subsystems.

Learning resources:

In case you didn't know, the subsystem classes are instantiated and managed by the Engine itself. See the second link down below to know more about different subsystems and their lifetime.

Subsystems livestream: https://www.youtube.com/watch?v=v5b1FvKBYzc
Working with subsystems (Documentation & examples on how to get the subsustem's reference in other classes): https://docs.unrealengine.com/en-US/ProgrammingAndScripting/Subsystems/index.html

Making it tick:
FTickableObjectBase class: https://docs.unrealengine.com/en-US/API/Runtime/Engine/FTickableObjectBase/index.html
