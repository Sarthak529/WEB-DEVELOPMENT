/* ==============================
   1. RESET & BOX MODEL
   ============================== */
*, *::before, *::after {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

img, video { max-width: 100%; height: auto; display: block; }
a { text-decoration: none; color: inherit; }
ul, ol { list-style: none; }

/* ==============================
   2. CSS VARIABLES
   ============================== */
:root {
  --color-primary: #3498db;
  --color-primary-dark: #2980b9;
  --color-dark: #2c3e50;
  --color-text: #444;
  --color-light: #f8f9fa;
  --color-border: #e0e0e0;

  --font-family: 'Inter', sans-serif;
  --font-size-sm: 0.875rem;
  --font-size-base: 1rem;
  --font-size-lg: 1.125rem;
  --font-size-xl: 1.5rem;
  --font-size-2xl: 2rem;
  --font-size-3xl: clamp(2rem, 5vw, 3.5rem);

  --spacing-xs: 0.25rem;
  --spacing-sm: 0.5rem;
  --spacing-md: 1rem;
  --spacing-lg: 2rem;
  --spacing-xl: 4rem;

  --border-radius: 8px;
  --border-radius-lg: 16px;
  --shadow-sm: 0 2px 8px rgba(0,0,0,0.08);
  --shadow-md: 0 4px 20px rgba(0,0,0,0.12);
  --shadow-lg: 0 10px 40px rgba(0,0,0,0.15);

  --transition: all 0.3s ease;
  --max-width: 1200px;
}

/* ==============================
   3. BASE STYLES
   ============================== */
html { scroll-behavior: smooth; }

body {
  font-family: var(--font-family);
  font-size: var(--font-size-base);
  line-height: 1.6;
  color: var(--color-text);
  background-color: #fff;
}

::selection {
  background: var(--color-primary);
  color: white;
}

/* ==============================
   4. TYPOGRAPHY
   ============================== */
h1, h2, h3, h4 {
  color: var(--color-dark);
  line-height: 1.2;
  font-weight: 700;
}

h1 { font-size: var(--font-size-3xl); }
h2 { font-size: var(--font-size-2xl); }
h3 { font-size: var(--font-size-xl); }
h4 { font-size: var(--font-size-lg); }
p  { font-size: var(--font-size-base); margin-bottom: var(--spacing-md); }

/* ==============================
   5. LAYOUT
   ============================== */
.container {
  width: 100%;
  max-width: var(--max-width);
  margin: 0 auto;
  padding: 0 var(--spacing-md);
}

/* Navigation */
.navbar {
  position: sticky;
  top: 0;
  z-index: 1000;
  background: white;
  border-bottom: 1px solid var(--color-border);
  padding: var(--spacing-md) 0;
  box-shadow: var(--shadow-sm);
}

.navbar__inner {
  display: flex;
  justify-content: space-between;
  align-items: center;
  max-width: var(--max-width);
  margin: 0 auto;
  padding: 0 var(--spacing-md);
}

.navbar__logo {
  font-size: var(--font-size-xl);
  font-weight: 700;
  color: var(--color-primary);
}

.navbar__links {
  display: flex;
  gap: var(--spacing-lg);
}

.navbar__links a {
  font-weight: 500;
  color: var(--color-text);
  transition: var(--transition);
}

.navbar__links a:hover {
  color: var(--color-primary);
}

/* Hero Section */
.hero {
  display: flex;
  align-items: center;
  justify-content: center;
  text-align: center;
  min-height: 90vh;
  background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
  color: white;
  padding: var(--spacing-xl) var(--spacing-md);
}

.hero__title {
  font-size: var(--font-size-3xl);
  color: white;
  margin-bottom: var(--spacing-md);
  animation: fadeInUp 0.8s ease forwards;
}

.hero__subtitle {
  font-size: var(--font-size-lg);
  opacity: 0.9;
  max-width: 600px;
  margin: 0 auto var(--spacing-lg);
  animation: fadeInUp 0.8s ease 0.2s both;
}

/* Section */
.section {
  padding: var(--spacing-xl) var(--spacing-md);
}

.section__title {
  text-align: center;
  margin-bottom: var(--spacing-xl);
  position: relative;
}

.section__title::after {
  content: "";
  display: block;
  width: 60px;
  height: 4px;
  background: var(--color-primary);
  border-radius: 2px;
  margin: var(--spacing-sm) auto 0;
}

/* Card Grid */
.card-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));
  gap: var(--spacing-lg);
}

/* ==============================
   6. COMPONENTS
   ============================== */

/* Button */
.btn {
  display: inline-block;
  padding: 0.75rem 1.5rem;
  border-radius: var(--border-radius);
  font-weight: 600;
  font-size: var(--font-size-base);
  cursor: pointer;
  border: none;
  transition: var(--transition);
}

.btn--primary {
  background: var(--color-primary);
  color: white;
}

.btn--primary:hover {
  background: var(--color-primary-dark);
  transform: translateY(-2px);
  box-shadow: var(--shadow-md);
}

.btn--outline {
  background: transparent;
  color: var(--color-primary);
  border: 2px solid var(--color-primary);
}

.btn--outline:hover {
  background: var(--color-primary);
  color: white;
}

/* Card */
.card {
  background: white;
  border-radius: var(--border-radius-lg);
  overflow: hidden;
  box-shadow: var(--shadow-sm);
  transition: var(--transition);
}

.card:hover {
  transform: translateY(-6px);
  box-shadow: var(--shadow-lg);
}

.card__image {
  width: 100%;
  height: 200px;
  object-fit: cover;
}

.card__body {
  padding: var(--spacing-lg);
}

.card__title {
  font-size: var(--font-size-lg);
  margin-bottom: var(--spacing-sm);
}

/* Form */
.form__group {
  margin-bottom: var(--spacing-md);
}

.form__label {
  display: block;
  font-weight: 600;
  margin-bottom: var(--spacing-xs);
  color: var(--color-dark);
}

.form__input,
.form__textarea {
  width: 100%;
  padding: 0.75rem 1rem;
  border: 2px solid var(--color-border);
  border-radius: var(--border-radius);
  font-size: var(--font-size-base);
  font-family: var(--font-family);
  transition: border-color 0.3s ease;
  outline: none;
}

.form__input:focus,
.form__textarea:focus {
  border-color: var(--color-primary);
}

.form__input::placeholder {
  color: #aaa;
}

/* Footer */
.footer {
  background: var(--color-dark);
  color: #aaa;
  text-align: center;
  padding: var(--spacing-lg);
  font-size: var(--font-size-sm);
}

/* ==============================
   7. ANIMATIONS
   ============================== */
@keyframes fadeInUp {
  from {
    opacity: 0;
    transform: translateY(30px);
  }
  to {
    opacity: 1;
    transform: translateY(0);
  }
}

/* ==============================
   8. MEDIA QUERIES
   ============================== */
@media (max-width: 768px) {
  .navbar__links {
    display: none; /* would be replaced with hamburger menu in real project */
  }

  .hero {
    min-height: 70vh;
  }

  .card-grid {
    grid-template-columns: 1fr;
  }
}

@media (prefers-reduced-motion: reduce) {
  *, *::before, *::after {
    animation: none !important;
    transition: none !important;
  }
}

@media (prefers-color-scheme: dark) {
  :root {
    --color-text: #e0e0e0;
    --color-border: #444;
  }
  body { background: #121212; }
  .card { background: #1e1e1e; }
  .navbar { background: #1e1e1e; }
}