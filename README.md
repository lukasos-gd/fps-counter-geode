# FPS Counter Geode Mod (Android)

This is a mod for **Geometry Dash** using **Geode 4.10.0**, which displays **FPS** and **Attempts** during gameplay.

---

- `mod.json` – Mod settings and icon  
- `CMakeLists.txt` – Build script for Geode  
- `src/main.cpp` – The C++ code of the mod  
- `resources/fps.png` – Mod icon  

---

## ⚡ Features

- Shows live FPS while playing  
- Shows current Attempts  
- Custom icon in Geode Launcher  
- Slider to adjust text scale in settings  

---

## 🛠 How to Compile

> ⚠️ **Important:** On Android, you must generate a `.android64.so` file for Geode.  
> This **cannot be created manually with a file manager**.

### Recommended: GitHub + GitHub Actions

1. Create a GitHub repository and upload all mod files.  
2. Set up a GitHub Actions workflow to build the Android `.so`.  
3. After the workflow finishes, download `lukas.fps_counter.geode.zip` → unzip it.  

---

### PC Method (Windows/Linux) with Geode CLI

1. Install **Geode CLI** and Android **NDK**  
2. Navigate to the mod folder:  

```bash
geode build -p android
