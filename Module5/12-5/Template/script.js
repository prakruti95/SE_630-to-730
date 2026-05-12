const backToTop = document.getElementById('backToTop');
const preloader = document.getElementById('preloader');
const contactForm = document.getElementById('contactForm');
const applyForm = document.getElementById('applyForm');
const contactResponse = document.getElementById('contactResponse');
const applyResponse = document.getElementById('applyResponse');
const successModal = document.getElementById('successModal');
const modalClose = document.getElementById('modalClose');
const courseSearch = document.getElementById('courseSearch');
const courseCategory = document.getElementById('courseCategory');
const courseList = document.getElementById('courseList');
const counters = document.querySelectorAll('[data-target]');
let countersAnimated = false;

window.addEventListener('load', () => {
  if (preloader) preloader.style.display = 'none';
});

window.addEventListener('scroll', () => {
  if (backToTop) {
    backToTop.style.display = window.scrollY > 400 ? 'grid' : 'none';
  }
  if (!countersAnimated) {
    counters.forEach((counter) => {
      if (isElementInViewport(counter)) {
        animateCounter(counter);
        countersAnimated = true;
      }
    });
  }
});

if (backToTop) {
  backToTop.addEventListener('click', () => {
    window.scrollTo({ top: 0, behavior: 'smooth' });
  });
}

if (contactForm) {
  contactForm.addEventListener('submit', (event) => {
    event.preventDefault();
    if (validateForm(contactForm)) {
      contactResponse.textContent = 'Thank you! Your enquiry has been sent successfully.';
      contactForm.reset();
    } else {
      contactResponse.textContent = 'Please fill in all required fields correctly.';
    }
  });
}

if (applyForm) {
  applyForm.addEventListener('submit', (event) => {
    event.preventDefault();
    if (validateForm(applyForm)) {
      successModal.setAttribute('aria-hidden', 'false');
      successModal.classList.add('modal-visible');
      applyForm.reset();
    } else {
      if (applyResponse) applyResponse.textContent = 'Please complete every required field before submitting.';
    }
  });
}

if (modalClose) {
  modalClose.addEventListener('click', () => {
    successModal.setAttribute('aria-hidden', 'true');
    successModal.classList.remove('modal-visible');
  });
}

if (courseSearch) {
  courseSearch.addEventListener('input', filterCourses);
}

if (courseCategory) {
  courseCategory.addEventListener('change', filterCourses);
}

function validateForm(form) {
  const inputs = Array.from(form.querySelectorAll('input, textarea, select'));
  let valid = true;
  inputs.forEach((input) => {
    if (input.hasAttribute('required')) {
      if (!input.value.trim()) {
        valid = false;
      }
      if (input.type === 'email' && input.value) {
        valid = valid && /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(input.value);
      }
    }
  });
  return valid;
}

function filterCourses() {
  if (!courseList) return;
  const query = courseSearch?.value.trim().toLowerCase() || '';
  const category = courseCategory?.value || 'all';
  const cards = Array.from(courseList.querySelectorAll('.course-card'));
  cards.forEach((card) => {
    const title = card.querySelector('.course-card-header span')?.textContent.toLowerCase() || '';
    const matchesText = title.includes(query);
    const matchesCategory = category === 'all' || card.dataset.category === category;
    card.style.display = matchesText && matchesCategory ? 'grid' : 'none';
  });
}

function animateCounter(element) {
  const target = parseInt(element.dataset.target, 10);
  const duration = 1600;
  let current = 0;
  const stepTime = 20;
  const increment = Math.max(1, Math.ceil(target / (duration / stepTime)));
  const timer = setInterval(() => {
    current += increment;
    if (current >= target) {
      element.textContent = target;
      clearInterval(timer);
    } else {
      element.textContent = current;
    }
  }, stepTime);
}

function isElementInViewport(el) {
  const rect = el.getBoundingClientRect();
  return rect.top < window.innerHeight && rect.bottom >= 0;
}

const newsletterForms = document.querySelectorAll('.newsletter-form');
newsletterForms.forEach((form) => {
  form.addEventListener('submit', (event) => {
    event.preventDefault();
    const emailInput = form.querySelector('input[type="email"]');
    if (emailInput && emailInput.value.trim()) {
      emailInput.value = '';
      alert('Thank you for subscribing!');
    }
  });
});
