{{cookiecutter.project_name}}
{% for _ in cookiecutter.project_name %}={% endfor %}

{cookiecutter.project_short_description}}

Installation
------------

{{cookiecutter.project_name}} cane be pip installed with the following command:

.. code-block:: bash

   pip install {{cookiecutter.project_name}}

Tests
-----

Tests can be run via tox with the following command:

.. code-block:: bash

   pip install tox
   tox

Documentation
-------------

* latest: https://{{ cookiecutter.project_name | replace("_", "-") }}.readthedocs.io

Acknowledgements
----------------

This package was created with Cookiecutter_ and the `eleftherioszisis/cookiecutter-nanobind-github`_ project template.

.. _Cookiecutter: https://github.com/audreyr/cookiecutter
.. _`eleftherioszisis/cookiecutter-nanobind-github`: https://github.com/eleftherioszisis/cookiecutter-nanobind-github

