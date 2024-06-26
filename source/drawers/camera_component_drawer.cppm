export module atom.editor:drawers.camera_component_drawer;

import atom.core;
import atom.engine;
import :drawers.property_drawer;

namespace atom::editor
{
    export class camera_component_drawer: public property_drawer
    {
    public:
        camera_component_drawer() {}

    public:
        virtual auto draw() -> void override
        {
            engine::ImGui::Text("camera component");
        }

        virtual auto set_property(void* property) -> void override
        {
            _camera_component = reinterpret_cast<engine::camera_component*>(property);
        }

        virtual auto get_property_name() -> string_view override
        {
            return "camera component";
        }

        virtual auto get_id() -> void* override
        {
            return (void*)typeid(engine::camera_component).hash_code();
        }

    private:
        engine::camera_component* _camera_component;
    };
}
