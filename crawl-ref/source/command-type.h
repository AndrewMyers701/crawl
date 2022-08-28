#pragma once

enum command_type
{
    CMD_NO_CMD = 2000,
    CMD_NO_CMD_DEFAULT, // hack to allow assignment of keys to CMD_NO_CMD
    CMD_MOVE_LEFT,
    CMD_MOVE_DOWN,
    CMD_MOVE_UP,
    CMD_MOVE_RIGHT,
    CMD_MOVE_UP_LEFT,
    CMD_MOVE_DOWN_LEFT,
    CMD_MOVE_UP_RIGHT,
    CMD_MOVE_DOWN_RIGHT,
    CMD_RUN_LEFT,
    CMD_RUN_DOWN,
    CMD_RUN_UP,
    CMD_RUN_RIGHT,
    CMD_RUN_UP_LEFT,
    CMD_RUN_DOWN_LEFT,
    CMD_RUN_UP_RIGHT,
    CMD_RUN_DOWN_RIGHT,
    CMD_SAFE_WAIT,
    CMD_SAFE_MOVE_LEFT,
    CMD_SAFE_MOVE_DOWN,
    CMD_SAFE_MOVE_UP,
    CMD_SAFE_MOVE_RIGHT,
    CMD_SAFE_MOVE_UP_LEFT,
    CMD_SAFE_MOVE_DOWN_LEFT,
    CMD_SAFE_MOVE_UP_RIGHT,
    CMD_SAFE_MOVE_DOWN_RIGHT,
    CMD_ATTACK_LEFT,
    CMD_ATTACK_DOWN,
    CMD_ATTACK_UP,
    CMD_ATTACK_RIGHT,
    CMD_ATTACK_UP_LEFT,
    CMD_ATTACK_DOWN_LEFT,
    CMD_ATTACK_UP_RIGHT,
    CMD_ATTACK_DOWN_RIGHT,
    CMD_PRIMARY_ATTACK,
    CMD_OPEN_DOOR,
    CMD_CLOSE_DOOR_LEFT,
    CMD_CLOSE_DOOR_DOWN,
    CMD_CLOSE_DOOR_UP,
    CMD_CLOSE_DOOR_RIGHT,
    CMD_CLOSE_DOOR_UP_LEFT,
    CMD_CLOSE_DOOR_DOWN_LEFT,
    CMD_CLOSE_DOOR_UP_RIGHT,
    CMD_CLOSE_DOOR_DOWN_RIGHT,
    CMD_CLOSE_DOOR,
    CMD_REST,
    CMD_GO_UPSTAIRS,
    CMD_GO_DOWNSTAIRS,
    CMD_TOGGLE_AUTOPICKUP,
    CMD_TOGGLE_SOUND,
    CMD_TOGGLE_TRAVEL_SPEED,
    CMD_PICKUP,
    CMD_PICKUP_QUANTITY,
    CMD_DROP,
    CMD_DROP_LAST,
    CMD_INSPECT_FLOOR,
    CMD_SHOW_TERRAIN,
    CMD_FULL_VIEW,
    CMD_EVOKE,
    CMD_WIELD_WEAPON,
    CMD_WEAPON_SWAP,
    CMD_FIRE,
    CMD_QUIVER_ITEM,
    CMD_FIRE_ITEM_NO_QUIVER,
    CMD_WEAR_ARMOUR,
    CMD_REMOVE_ARMOUR,
    CMD_WEAR_JEWELLERY,
    CMD_REMOVE_JEWELLERY,
    CMD_CYCLE_QUIVER_FORWARD,
    CMD_CYCLE_QUIVER_BACKWARD,
    CMD_SWAP_QUIVER_RECENT,
    CMD_LIST_ARMOUR,
    CMD_LIST_JEWELLERY,
    CMD_LIST_GOLD,
    CMD_ZAP_WAND,
    CMD_CAST_SPELL,
    CMD_FORCE_CAST_SPELL,
    CMD_MEMORISE_SPELL,
    CMD_USE_ABILITY,
    CMD_QUAFF,
    CMD_READ,
    CMD_LOOK_AROUND,
    CMD_WAIT,
    CMD_SHOUT,
    CMD_CHARACTER_DUMP,
    CMD_DISPLAY_COMMANDS,
    CMD_DISPLAY_INVENTORY,
    CMD_DISPLAY_KNOWN_OBJECTS,
    CMD_DISPLAY_MUTATIONS,
    CMD_DISPLAY_SKILLS,
    CMD_DISPLAY_MAP,
    CMD_DISPLAY_OVERMAP,
    CMD_DISPLAY_RELIGION,
    CMD_DISPLAY_RUNES,
    CMD_DISPLAY_CHARACTER_STATUS,
    CMD_DISPLAY_SPELLS,
    CMD_LOOKUP_HELP,
    CMD_EXPERIENCE_CHECK,
    CMD_ADJUST_INVENTORY,
    CMD_REPLAY_MESSAGES,
    CMD_REDRAW_SCREEN,
    CMD_MACRO_ADD,
    CMD_MACRO_MENU,
    CMD_SAVE_GAME,
    CMD_SAVE_GAME_NOW,
    CMD_SUSPEND_GAME,
    CMD_QUIT,
    CMD_WIZARD,
    CMD_EXPLORE_MODE,

    CMD_SEARCH_STASHES,
    CMD_EXPLORE,
    CMD_INTERLEVEL_TRAVEL,
    CMD_FIX_WAYPOINT,

    CMD_CLEAR_MAP,
    CMD_INSCRIBE_ITEM,
    CMD_MAKE_NOTE,
    CMD_RESISTS_SCREEN,

    CMD_READ_MESSAGES,

    CMD_MOUSE_MOVE,
    CMD_MOUSE_CLICK,

    CMD_ANNOTATE_LEVEL,

    CMD_AUTOFIGHT,
    CMD_AUTOFIGHT_NOMOVE,
    CMD_AUTOFIRE,

#ifdef USE_TILE
    CMD_ZOOM_IN,
    CMD_ZOOM_OUT,

    CMD_EDIT_PLAYER_TILE,
    CMD_MIN_TILE = CMD_EDIT_PLAYER_TILE,
    CMD_MAX_TILE = CMD_EDIT_PLAYER_TILE,
#endif

#ifdef __ANDROID__
    // toggle the tab icons visibility in the small layout
    CMD_TOGGLE_TAB_ICONS,
    // toggle the on-screen keyboard visibility
    CMD_TOGGLE_KEYBOARD,
#endif

    // Repeat previous command
    CMD_PREV_CMD_AGAIN,

    // Repeat next command a given number of times
    CMD_REPEAT_CMD,

    CMD_SHOW_CHARACTER_DUMP,
    CMD_GAME_MENU,
#ifdef TARGET_OS_MACOSX
    CMD_REVEAL_OPTIONS,
#endif
    CMD_LUA_CONSOLE,

    CMD_MAX_NORMAL = CMD_LUA_CONSOLE,

    // inventory only
    CMD_SET_SKILL_TARGET,

    // overmap commands
    CMD_MAP_CLEAR_MAP,
    CMD_MIN_OVERMAP = CMD_MAP_CLEAR_MAP,
    CMD_MAP_ADD_WAYPOINT,
    CMD_MAP_EXCLUDE_AREA,
    CMD_MAP_CLEAR_EXCLUDES,
    CMD_MAP_EXCLUDE_RADIUS,

    CMD_MAP_MOVE_LEFT,
    CMD_MAP_MOVE_DOWN,
    CMD_MAP_MOVE_UP,
    CMD_MAP_MOVE_RIGHT,
    CMD_MAP_MOVE_UP_LEFT,
    CMD_MAP_MOVE_DOWN_LEFT,
    CMD_MAP_MOVE_UP_RIGHT,
    CMD_MAP_MOVE_DOWN_RIGHT,

    CMD_MAP_JUMP_LEFT,
    CMD_MAP_JUMP_DOWN,
    CMD_MAP_JUMP_UP,
    CMD_MAP_JUMP_RIGHT,
    CMD_MAP_JUMP_UP_LEFT,
    CMD_MAP_JUMP_DOWN_LEFT,
    CMD_MAP_JUMP_UP_RIGHT,
    CMD_MAP_JUMP_DOWN_RIGHT,

    CMD_MAP_NEXT_LEVEL,
    CMD_MAP_PREV_LEVEL,
    CMD_MAP_GOTO_LEVEL,

    CMD_MAP_SCROLL_DOWN,
    CMD_MAP_SCROLL_UP,

    CMD_MAP_FIND_UPSTAIR,
    CMD_MAP_FIND_DOWNSTAIR,
    CMD_MAP_FIND_YOU,
    CMD_MAP_FIND_PORTAL,
    CMD_MAP_FIND_TRAP,
    CMD_MAP_FIND_ALTAR,
    CMD_MAP_FIND_EXCLUDED,
    CMD_MAP_FIND_WAYPOINT,
    CMD_MAP_FIND_STASH,
    CMD_MAP_FIND_STASH_REVERSE,

    CMD_MAP_GOTO_TARGET,
    CMD_MAP_ANNOTATE_LEVEL,

    CMD_MAP_EXPLORE,

    CMD_MAP_WIZARD_TELEPORT,
    CMD_MAP_WIZARD_FORGET,

    CMD_MAP_DESCRIBE,

    CMD_MAP_HELP,
    CMD_MAP_FORGET,
    CMD_MAP_UNFORGET,

#ifdef USE_TILE
    CMD_MAP_ZOOM_IN,
    CMD_MAP_ZOOM_OUT,
#endif

    CMD_MAP_EXIT_MAP,

    CMD_MAX_OVERMAP = CMD_MAP_EXIT_MAP,

    // targeting commands
    CMD_TARGET_DOWN_LEFT,
    CMD_MIN_TARGET = CMD_TARGET_DOWN_LEFT,
    CMD_TARGET_DOWN,
    CMD_TARGET_DOWN_RIGHT,
    CMD_TARGET_LEFT,
    CMD_TARGET_RIGHT,
    CMD_TARGET_UP_LEFT,
    CMD_TARGET_UP,
    CMD_TARGET_UP_RIGHT,

    CMD_TARGET_DIR_DOWN_LEFT,
    CMD_TARGET_DIR_DOWN,
    CMD_TARGET_DIR_DOWN_RIGHT,
    CMD_TARGET_DIR_LEFT,
    CMD_TARGET_DIR_RIGHT,
    CMD_TARGET_DIR_UP_LEFT,
    CMD_TARGET_DIR_UP,
    CMD_TARGET_DIR_UP_RIGHT,

    CMD_TARGET_DESCRIBE,
    CMD_TARGET_FULL_DESCRIBE,
    CMD_TARGET_PREV_TARGET,
    CMD_TARGET_MAYBE_PREV_TARGET,
    CMD_TARGET_SELECT,
    CMD_TARGET_SELECT_ENDPOINT,
    CMD_TARGET_SELECT_FORCE,
    CMD_TARGET_SELECT_FORCE_ENDPOINT,
    CMD_TARGET_GET,
    CMD_TARGET_OBJ_CYCLE_BACK,
    CMD_TARGET_OBJ_CYCLE_FORWARD,
    CMD_TARGET_CYCLE_FORWARD,
    CMD_TARGET_CYCLE_BACK,
    CMD_TARGET_CYCLE_BEAM,
    CMD_TARGET_TOGGLE_BEAM,
    CMD_TARGET_CANCEL,
    CMD_TARGET_SHOW_PROMPT,
    CMD_TARGET_OLD_SPACE,
    CMD_TARGET_EXCLUDE,
    CMD_TARGET_FIND_TRAP,
    CMD_TARGET_FIND_PORTAL,
    CMD_TARGET_FIND_ALTAR,
    CMD_TARGET_FIND_UPSTAIR,
    CMD_TARGET_FIND_DOWNSTAIR,
    CMD_TARGET_FIND_YOU,
    CMD_TARGET_CYCLE_QUIVER_BACKWARD,
    CMD_TARGET_CYCLE_QUIVER_FORWARD,
    CMD_TARGET_SELECT_ACTION,
    CMD_TARGET_WIZARD_MAKE_FRIENDLY,
    CMD_TARGET_WIZARD_BLESS_MONSTER,
    CMD_TARGET_WIZARD_MAKE_SHOUT,
    CMD_TARGET_WIZARD_GIVE_ITEM,
    CMD_TARGET_WIZARD_MOVE,
    CMD_TARGET_WIZARD_PATHFIND,
    CMD_TARGET_WIZARD_GAIN_LEVEL,
    CMD_TARGET_WIZARD_MISCAST,
    CMD_TARGET_WIZARD_MAKE_SUMMONED,
    CMD_TARGET_WIZARD_POLYMORPH,
    CMD_TARGET_WIZARD_DEBUG_MONSTER,
    CMD_TARGET_WIZARD_HEAL_MONSTER,
    CMD_TARGET_WIZARD_HURT_MONSTER,
    CMD_TARGET_WIZARD_DEBUG_PORTAL,
    CMD_TARGET_WIZARD_KILL_MONSTER,
    CMD_TARGET_WIZARD_BANISH_MONSTER,
    CMD_TARGET_WIZARD_CREATE_MIMIC,
    CMD_TARGET_MOUSE_MOVE,
    CMD_TARGET_MOUSE_SELECT,
    CMD_TARGET_HELP,
    CMD_MAX_TARGET = CMD_TARGET_HELP,

    CMD_MENU_UP,      // move hover or menu scroll, depending on options
    CMD_MIN_MENU = CMD_MENU_UP,
    CMD_MENU_DOWN,
    CMD_MENU_LINE_UP, // move menu scroll no matter what
    CMD_MENU_LINE_DOWN,
    CMD_MENU_PAGE_UP,
    CMD_MENU_PAGE_DOWN,
    CMD_MENU_SCROLL_TO_TOP,
    CMD_MENU_SCROLL_TO_END,
    CMD_MENU_SEARCH,
    CMD_MENU_CYCLE_MODE,
    CMD_MENU_CYCLE_MODE_REVERSE,
    CMD_MENU_CYCLE_HEADERS,
    CMD_MENU_HELP,
    CMD_MENU_SELECT, // e.g. select + accept
    CMD_MENU_EXAMINE, // used internally for relevant menus, doesn't need a binding
    CMD_MENU_EXIT,
    CMD_MAX_MENU = CMD_MENU_EXIT,

    // allow multiselect keybinds to override default menu keybinds
    CMD_MENU_ACCEPT_SELECTION,
    CMD_MIN_MENU_MS = CMD_MENU_ACCEPT_SELECTION,
    CMD_MENU_SELECT_ALL,
    CMD_MENU_CLEAR_SELECTION,
    CMD_MENU_INVERT_SELECTION,
    CMD_MENU_TOGGLE_SELECTED,
    CMD_MAX_MENU_MS = CMD_MENU_TOGGLE_SELECTED,

#ifdef USE_TILE
    // Tile doll editing screen
    CMD_DOLL_RANDOMIZE,
    CMD_MIN_DOLL = CMD_DOLL_RANDOMIZE,
    CMD_DOLL_SELECT_NEXT_DOLL,
    CMD_DOLL_SELECT_PREV_DOLL,
    CMD_DOLL_SELECT_NEXT_PART,
    CMD_DOLL_SELECT_PREV_PART,
    CMD_DOLL_CHANGE_PART_NEXT,
    CMD_DOLL_CHANGE_PART_PREV,
    CMD_DOLL_CONFIRM_CHOICE,
    CMD_DOLL_COPY,
    CMD_DOLL_PASTE,
    CMD_DOLL_TAKE_OFF,
    CMD_DOLL_TAKE_OFF_ALL,
    CMD_DOLL_TOGGLE_EQUIP,
    CMD_DOLL_TOGGLE_EQUIP_ALL,
    CMD_DOLL_JOB_DEFAULT,
    CMD_DOLL_CHANGE_MODE,
    CMD_DOLL_SAVE,
    CMD_DOLL_QUIT,
    CMD_MAX_DOLL = CMD_DOLL_QUIT,
#endif

    // Disable/enable -more- prompts.
    CMD_DISABLE_MORE,
    CMD_MIN_SYNTHETIC = CMD_DISABLE_MORE,
    CMD_ENABLE_MORE,
    CMD_UNWIELD_WEAPON,

    // [ds] Silently ignored, requests another round of input.
    CMD_NEXT_CMD,

    // Must always be last
    CMD_MAX_CMD
};
