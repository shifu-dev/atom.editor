export module atom.editor:drawers.property_drawer;

import atom.core;

namespace atom::editor
{
    export class property_drawer
    {
    public:
        property_drawer() {}

    public:
        virtual auto draw() -> void = 0;
        virtual auto set_property(void* property) -> void = 0;
        virtual auto get_id() -> void* = 0;
        virtual auto get_property_name() -> string_view = 0;
    };
}
