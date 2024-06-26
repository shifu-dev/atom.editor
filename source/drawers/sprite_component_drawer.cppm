export module atom.editor:drawers.sprite_component_drawer;

import atom.core;
import atom.engine;
import :drawers.property_drawer;

namespace atom::editor
{
    export class sprite_component_drawer: public property_drawer
    {
    public:
        sprite_component_drawer() {}

    public:
        virtual auto draw() -> void override
        {
            engine::ImGui::Text("sprite component");
        }

        virtual auto set_property(void* property) -> void override
        {
            _sprite_component = reinterpret_cast<engine::sprite_component*>(property);
        }

        virtual auto get_property_name() -> string_view override
        {
            return "sprite component";
        }

        virtual auto get_id() -> void* override
        {
            return (void*)typeid(engine::sprite_component).hash_code();
        }

    private:
        engine::sprite_component* _sprite_component;
    };
}
